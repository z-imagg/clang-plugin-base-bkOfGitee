
#ifndef UtilDebugStmt_H
#define UtilDebugStmt_H


#include <unordered_set>
#include "clang/Lex/Lexer.h"
#include "LocId.h"
#include "clang/Basic/SourceManager.h"
#include "clang/AST/Stmt.h"
#include "clang/AST/RecursiveASTVisitor.h"
#include "clang/AST/ASTContext.h"
#include "clang/AST/ASTConsumer.h"
#include <sstream>
#include <clang/AST/ParentMapContext.h>
#include <clang/Frontend/CompilerInstance.h>
#include <set>
#include <clang/Rewrite/Core/Rewriter.h>
#include <string>

class UtilDebugStmt {
public:
  static int stmt_GlobalCounter;
public:
  static bool ifCodeTxtEqPrintSrcTxt(  Stmt *stmt,std::string codeText, ASTContext &Ctx_ref, CompilerInstance &CI_ref);
  static void debugStmtByGlobalCounter(      Stmt *stmt, ASTContext &Ctx_ref, CompilerInstance &CI_ref);

};


#endif //UtilDebugStmt_H