int __fastcall dp01_battle_side_mark_buffer_for_execution(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( v20239F8 & 2 )
    v2024A64 |= gBitTable[a1] << 28;
  else
    v2024A64 |= gBitTable[a1];
  return v2;
}
