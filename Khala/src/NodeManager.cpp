/*
 * NodeManager.cpp
 *
 *  Created on: Dec 9, 2015
 *      Author: moss
 */
#include <khala/NodeManager.h>
#include <khala/ObjectType.h>
using namespace khala;
bool NodeManager::hasNode(uint id) {
	return nodeServer_->getNodePool()->hasNode(id);
}
bool NodeManager::hasNode(uint id,const std::string& type){
	return nodeServer_->getNodePool()->hasNode(id,type);
}
bool NodeManager::find(uint id, InfoNodePtr& infoNodePtr) {
	return nodeServer_->getNodePool()->find(id, infoNodePtr);
}
bool NodeManager::find(uint id, InfoNodePtr& infoNodePtr,const std::string& type){
	return nodeServer_->getNodePool()->find(id, infoNodePtr,type);
}
std::vector<uint> NodeManager::getNodeIDs(ObjectType* objectType) {
	return getNodeIDs(objectType->getObjectTypeName());
}
std::vector<uint> NodeManager::getNodeIDs(const std::string& type) {
	return nodeServer_->getNodePool()->getNodeByType(type);
}

