int __fastcall unref_sub_80F924C(char a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char v3; // r5@1
  unsigned __int8 v4; // r6@1
  unsigned __int8 v5; // r4@1
  int v7; // [sp+0h] [bp-14h]@1
  int v8; // [sp+10h] [bp-4h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  memcpy(&v7, (const char *)&gUnknown_083E5A1C, 2);
  brm_trade_1(&v7, v5, v3, v4);
  return v8;
}
