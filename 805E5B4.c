int __fastcall sub_805E5B4(_BYTE *a1, int a2)
{
  _BYTE *v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  if ( FieldObjectExecRegularAnim() << 24 )
  {
    *v2 &= 0xFDu;
    *(_WORD *)(v3 + 48) = 1;
  }
  return 0;
}
