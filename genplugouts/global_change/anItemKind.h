#ifndef _ANITEMKIND_H
#define _ANITEMKIND_H

#include "Tools/ApiCmd.h"
// the king of any item, returned by UmlBaseItem::Kind()
enum anItemKind {
    aRelation,
    anAttribute,
    anOperation,
    anExtraClassMember,
    aClass,
    anUseCase,
    aComponent,
    aNode,
    anArtifact,
    aNcRelation,
    aClassDiagram,
    anUseCaseDiagram,
    aSequenceDiagram,
    aCollaborationDiagram,
    aComponentDiagram,
    aDeploymentDiagram,
    anObjectDiagram,
    anActivityDiagram,
    aClassView,
    anUseCaseView,
    aComponentView,
    aDeploymentView,
    aPackage,
    aState,
    aTransition,
    aRegion,
    aStateDiagram,
    aStateAction,
    anInitialPseudoState,
    anEntryPointPseudoState,
    aFinalState,
    aTerminatePseudoState,
    anExitPointPseudoState,
    aDeepHistoryPseudoState,
    aShallowHistoryPseudoState,
    aJunctionPseudoState,
    aChoicePseudoState,
    aForkPseudoState,
    aJoinPseudoState,
    anActivity,
    aFlow,
    anActivityParameter,
    aParameterSet,
    aPartition,
    anExpansionRegion,
    anInterruptibleActivityRegion,
    anOpaqueAction,
    anAcceptEventAction,
    aReadVariableValueAction,
    aClearVariableValueAction,
    aWriteVariableValueAction,
    anAddVariableValueAction,
    aRemoveVariableValueAction,
    aCallBehaviorAction,
    aCallOperationAction,
    aSendObjectAction,
    aSendSignalAction,
    aBroadcastSignalAction,
    anUnmarshallAction,
    aValueSpecificationAction,
    anActivityObject,
    anExpansionNode,
    anActivityPin,
    anInitialActivityNode,
    aFlowFinalActivityNode,
    anActivityFinalActivityNode,
    aDecisionActivityNode,
    aMergeActivityNode,
    aForkActivityNode,
    aJoinActivityNode,
    aClassInstance

};
#endif
