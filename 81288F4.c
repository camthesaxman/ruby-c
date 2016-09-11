int __fastcall sub_81288F4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  signed int v2; // r1@1
  _BYTE *v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  memset(33657572, 0, 68);
  v2 = 3;
  v3 = (_BYTE *)33657580;
  do
  {
    *v3-- = 100;
    --v2;
  }
  while ( v2 >= 0 );
  v2019325 = v1;
  v2019324 = 0;
  v20192F8 = *(_DWORD *)((v1 << 6) + 0x2038588);
  return v5;
}
