// Fill out your copyright notice in the Description page of Project Settings.
#include "ProtoRPC_UE4PrivatePCH.h"

#include "AllowWindowsPlatformTypes.h"
#include "HttpRpcController.h"

HttpRpcController::HttpRpcController() {}

HttpRpcController::~HttpRpcController() {}

void HttpRpcController::Reset(){
}

bool HttpRpcController::Failed() const {
	return true;
}

std::string HttpRpcController::ErrorText() const {
	return "not implemented";
}

void HttpRpcController::StartCancel() {}

void HttpRpcController::SetFailed(const std::string& reason){}

bool HttpRpcController::IsCanceled() const {
	return true; }

void HttpRpcController::NotifyOnCancel(google::protobuf::Closure* callback) {
}

