int __fastcall sav12_xor_increment(unsigned __int8 a1)
{
  int *v1; // r1@2
  int v2; // r0@3
  int v4; // [sp+0h] [bp-4h]@0

  if ( a1 <= 0x31u )
  {
    v1 = (int *)(4 * a1 + 33713268);
    if ( *(_DWORD *)(4 * a1 + 0x2026C74) > 0xFFFFFEu )
      v2 = 0xFFFFFF;
    else
      v2 = *(_DWORD *)(4 * a1 + 0x2026C74) + 1;
    *v1 = v2;
  }
  return v4;
}
