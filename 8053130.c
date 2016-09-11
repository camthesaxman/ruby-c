int __fastcall sav12_xor_set(unsigned __int8 a1, int a2)
{
  int v3; // [sp+0h] [bp-4h]@0

  if ( a1 <= 0x31u )
    *(_DWORD *)(4 * a1 + 0x2026C74) = a2;
  return v3;
}
