int __fastcall sub_80A9D58(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  signed int v2; // r3@1
  char *v3; // r2@1
  int v5; // [sp+0h] [bp-Ch]@2
  int v6; // [sp+8h] [bp-4h]@3

  v1 = a1;
  v2 = 0;
  v3 = (char *)&unk_3004B32 + 40 * a1;
  do
  {
    *((_BYTE *)&v5 + v2) = *(_WORD *)v3;
    v3 += 2;
    ++v2;
  }
  while ( v2 <= 3 );
  v203869B = sub_80C4B34(&v5);
  sub_80AE82C(v203869C);
  sub_80B0F28(0);
  SetTaskFuncWithFollowupFunc(v1, (int)sub_80C8EBC, (int)sub_80A9DBC);
  return v6;
}
