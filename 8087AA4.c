int __fastcall sub_8087AA4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_807D770() << 24 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 38) = (unsigned __int8)player_get_direction_lower_nybble();
  }
  return v3;
}
