signed int __fastcall FieldObjectExecRegularAnim(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  signed int result; // r0@2

  v2 = a1;
  v3 = a2;
  if ( call_via_r2(a1, a2, gUnknown_08375778[*(_BYTE *)(a1 + 28)][*(_WORD *)(a2 + 50)]) << 24 )
  {
    *(_BYTE *)(v2 + 28) = -1;
    *(_WORD *)(v3 + 50) = 0;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
