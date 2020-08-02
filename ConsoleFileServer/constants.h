/** @file constants.h
	@brief A file containing universal constants for the app */
#pragma once
#include "stdafx.h"

const string ADMIN_CODE_INITIAL = "admin";

const int CAPACITY_BASE = 10;

const string MENU_MAIN[] = { "���α׷� ����", "����� ���", "������ ���", "ȸ������ ��û" };

const string MES_REQUEST_INPUT = "������ ��ȣ: ";
const string MES_RETRY = "�ٽ� �õ����ּ���.";

// Registraion
const string MES_REGISTER_ID = "id: ";
const string MES_REGISTER_PASS = "password: ";
const string MES_REGISTER_IDENTN = "�ֹι�ȣ: ";
const string MES_REGISTER_AUTH = "���ѷ���: ";
const string MES_REGISTER_SUCCESS = "ȸ������ ��û�� �Ϸ�Ǿ����ϴ�.";
const string MES_RIGISTER_ERR_ID_LEN = "���̵�� 5�� �̻�, 20�� ���Ͽ��� �մϴ�.";
const string MES_RIGISTER_ERR_ID_EXISTS = "�̹� �����ϴ� ���̵��Դϴ�.";
const string MES_RIGISTER_ERR_PASS_LEN = "��й�ȣ�� 8�� �̻�, 20�� ���Ͽ��� �մϴ�.";
const string MES_RIGISTER_ERR_PASS_IDENTN = "��й�ȣ�� �ֹε�Ϲ�ȣ�� ������ �� �����ϴ�.";
const string MES_RIGISTER_ERR_IDNETN = "�ùٸ��� ���� �ֹε�Ϲ�ȣ�Դϴ�.";
const string MES_RIGISTER_ERR_AUTHLEVEL = "���ѷ����� R, W, RW �� �ϳ����� �մϴ�.";
