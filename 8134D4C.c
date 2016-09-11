int __fastcall get_trainer_name(int a1)
{
  signed int v1; // r3@2
  char *v2; // r2@6
  _BYTE *v3; // r2@9
  int v5; // [sp+8h] [bp-4h]@0

  if ( v2025408 == 200 )
  {
    v1 = 0;
    do
    {
      *(_BYTE *)(a1 + v1) = *(_BYTE *)(v1 + 33706816);
      ++v1;
    }
    while ( v1 <= 6 );
  }
  else if ( v2025408 > 0x63u )
  {
    v1 = 0;
    v3 = (_BYTE *)(164 * (v2025408 - 100) + 33705972);
    do
      *(_BYTE *)(a1 + v1++) = *v3++;
    while ( v1 <= 6 );
  }
  else
  {
    v1 = 0;
    v2 = (char *)&unk_8402F01 + 24 * v2025408;
    do
      *(_BYTE *)(a1 + v1++) = *v2++;
    while ( v1 <= 6 );
  }
  *(_BYTE *)(a1 + v1) = -1;
  return v5;
}
