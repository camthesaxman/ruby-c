int __fastcall sub_805E0B8(_BYTE *a1, int a2)
{
  _BYTE *v2; // r6@1
  int v3; // r7@1
  char v4; // r0@2

  v2 = a1;
  v3 = a2;
  if ( FieldObjectExecRegularAnim() << 24 )
  {
    v4 = Random();
    sub_8064820(v3, (signed __int16)gUnknown_0837521C[v4 & 3]);
    *v2 &= 0xFDu;
    *(_WORD *)(v3 + 48) = 3;
  }
  return 0;
}
