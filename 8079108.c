int __fastcall sub_8079108(int a1, int a2)
{
  int v2; // r0@1
  int v3; // r0@2
  int v4; // r4@2
  _DWORD *v5; // r5@2
  signed int v6; // r6@2
  unsigned int v7; // r0@3
  int v9; // [sp+10h] [bp-4h]@0

  v2 = 16 * a1 & 0xFFFF;
  if ( a2 << 24 )
  {
    CpuSet(2 * v2 + 33745608, 2 * v2 + 33746632, 67108872);
  }
  else
  {
    v3 = 2 * v2;
    v4 = v3 + 33746632;
    v5 = (_DWORD *)(v3 + 33745608);
    v6 = 15;
    do
    {
      v7 = ((*v5 << 17 >> 27) + (*v5 & 0x1Fu) + (*v5 << 22 >> 27)) / 3 & 0x1F;
      *(_BYTE *)v4 = *(_BYTE *)v4 & 0xE0 | v7;
      *(_WORD *)v4 = *(_WORD *)v4 & 0xFC1F | 32 * v7;
      *(_BYTE *)(v4 + 1) = *(_BYTE *)(v4 + 1) & 0x83 | 4 * v7;
      v4 += 2;
      v5 = (_DWORD *)((char *)v5 + 2);
      --v6;
    }
    while ( v6 >= 0 );
  }
  return v9;
}
