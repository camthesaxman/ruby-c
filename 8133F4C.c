int __fastcall sub_8133F4C(int a1)
{
  unsigned int v1; // r3@1
  int v2; // r2@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = 0;
  v2 = 8 * a1 & 0x7FF;
  if ( (unsigned int)gUnknown_08402E40[v2 + 4] > 0 )
  {
    do
    {
      *(_BYTE *)(*(_DWORD *)&gUnknown_08402E40[v2] + v1) = 0;
      v1 = (v1 + 1) & 0xFF;
    }
    while ( v1 < gUnknown_08402E40[v2 + 4] );
  }
  return v4;
}
