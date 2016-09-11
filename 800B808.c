int __fastcall set_default_player_name(unsigned __int8 a1)
{
  const char *v1; // r1@2
  int v2; // r3@4
  unsigned int v3; // r2@4
  int v5; // [sp+8h] [bp-4h]@0

  if ( v2024EAC )
    v1 = " ß@\b";
  else
    v1 = " ß@\b";
  v2 = *(_DWORD *)&v1[8 * a1];
  v3 = 0;
  do
  {
    *(_BYTE *)(v3 + 33705636) = *(_BYTE *)(v2 + v3);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 6 );
  *(_BYTE *)(v3 + 33705636) = -1;
  return v5;
}
