int __fastcall unref_sub_8082EEC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int *v2; // r1@1
  __int16 v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4) + 1;
  *((_WORD *)v2 + 4) = v3;
  if ( v3 == 10 )
  {
    sub_8007E9C(2);
    DestroyTask(v1);
  }
  return v5;
}
