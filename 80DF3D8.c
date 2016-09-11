int __fastcall sub_80DF3D8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@2
  int v3; // r1@5
  int *v4; // r1@7
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 48) )
    v2 = *(_WORD *)(a1 + 50) - 2;
  else
    v2 = *(_WORD *)(a1 + 50) + 2;
  *(_WORD *)(v1 + 50) = v2;
  *(_WORD *)(v1 + 50) &= 0xFFu;
  *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 50), *(_WORD *)(v1 + 52));
  if ( ((*(_WORD *)(v1 + 50) - 65) & 0xFFFFu) > 0x7E )
    LOBYTE(v3) = BYTE2(dword_3004B20[10 * *(_WORD *)(v1 + 46) + 4]) & 3;
  else
    v3 = (HIWORD(dword_3004B20[10 * *(_WORD *)(v1 + 46) + 4]) + 1) & 3;
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * v3;
  *(_WORD *)(v1 + 58) = 8 * ++*(_WORD *)(v1 + 56) & 0xFF;
  *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 58), 7);
  v4 = &dword_3004B20[10 * *(_WORD *)(v1 + 46)];
  if ( *((_WORD *)v4 + 12) )
  {
    --*((_WORD *)v4 + 11);
    DestroySprite(v1);
  }
  return v6;
}
