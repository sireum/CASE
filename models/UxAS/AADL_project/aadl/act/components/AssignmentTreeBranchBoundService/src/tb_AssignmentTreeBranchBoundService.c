#include "tb_AssignmentTreeBranchBoundService.h"
#include <string.h>
#include <camkes.h>




bool tb_ServiceStatus_out_enqueue(const CMASI__ServiceStatus_i * tb_ServiceStatus_out){
  bool tb_result = true;
  tb_result &= tb_ServiceStatus_out0_enqueue((CMASI__ServiceStatus_i *) tb_ServiceStatus_out);
  return tb_result;
}
bool tb_TaskAssignmentSummary_out_enqueue(const UXTASK__TaskAssignmentSummary_i * tb_TaskAssignmentSummary_out){
  bool tb_result = true;
  tb_result &= tb_TaskAssignmentSummary_out0_enqueue((UXTASK__TaskAssignmentSummary_i *) tb_TaskAssignmentSummary_out);
  return tb_result;
}
