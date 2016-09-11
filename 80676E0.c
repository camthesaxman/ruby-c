int __fastcall sub_80676E0(int a1)
{
  int v1; // r7@1
  unsigned int i; // r6@1
  int v3; // r2@7
  __int16 v4; // r5@7

  v1 = script_read_halfword(a1) & 0xFFFF;
  v202E8DC = 6;
  for ( i = 0; i <= 5; i = (i + 1) & 0xFF )
  {
    v4 = GetMonData((int)&dword_3004360[25 * i], 11, 0);
    if ( !v4 )
      break;
    if ( !GetMonData((int)&dword_3004360[25 * i], 45, v3)
      && (unsigned __int8)pokemon_has_move(&dword_3004360[25 * i], v1) == 1 )
    {
      v202E8DC = i;
      v202E8CC = v4;
      return 0;
    }
  }
  return 0;
}
