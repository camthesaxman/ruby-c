int __fastcall diegohint2(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( a1 == 14 )
  {
    memcpy(&dword_3004360[25 * a2], 33564084, 100);
  }
  else
  {
    pokemon_restore_pp((unsigned int *)0x20025B4);
    memcpy(80 * v3 + 2400 * v2 + 33751204, 33564084, 80);
  }
  return v5;
}
