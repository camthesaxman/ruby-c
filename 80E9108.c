int __fastcall sub_80E9108(char a1)
{
  unsigned int v1; // r4@1
  int v2; // r2@2
  int v4; // [sp+10h] [bp-4h]@0

  v200AC32 += a1;
  v1 = 0;
  do
  {
    v2 = 2 * (v1 + 81);
    *(_WORD *)(v2 + 33745608) = *(_WORD *)(2 * v200AC32 + 18 * v1 + 0x200AC34);
    *(_WORD *)(v2 + 33746632) = *(_WORD *)(2 * v200AC32 + 18 * v1 + 0x200AC34);
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 2 );
  return v4;
}
