int __fastcall sub_8002FA0(int a1, int a2)
{
  int v2; // r4@1
  char v3; // r9@1
  int v4; // r6@1
  __int16 v5; // r8@1
  int result; // r0@1

  v2 = a1;
  v3 = *(_BYTE *)(a1 + 2);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = *(_WORD *)(a1 + 30);
  *(_DWORD *)(a1 + 32) = a2;
  *(_WORD *)(a1 + 30) = 0;
  *(_WORD *)(a1 + 22) = 2;
  result = (unsigned __int8)sub_8002F44(a1);
  *(_DWORD *)(v2 + 32) = v4;
  *(_WORD *)(v2 + 30) = v5;
  *(_WORD *)(v2 + 22) = 2;
  *(_BYTE *)(v2 + 2) = v3;
  return result;
}
