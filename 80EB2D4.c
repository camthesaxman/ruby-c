int __fastcall sub_80EB2D4(int a1)
{
  unsigned int v1; // r5@1
  int v2; // r4@1
  __int16 v3; // r6@1
  signed int v5; // r2@5
  int v6; // r1@5
  char *v7; // r1@10
  int v8; // r2@13

  v1 = a1 << 16;
  v2 = (unsigned __int16)a1;
  v3 = a1;
  if ( sub_80EB37C((unsigned __int16)a1) << 24 )
    return (unsigned __int16)StringLength(&OtherText_ThreeQuestions);
  if ( v2 == 0xFFFF )
    return 0;
  v5 = v1 >> 25;
  v6 = v3 & 0x1FF;
  if ( (signed int)(v1 >> 25) > 19 )
  {
    if ( v5 != 21 )
      goto _080EB344;
_080EB324:
    v7 = &gSpeciesNames[11 * v6];
    goto _080EB356;
  }
  if ( v5 >= 18 )
  {
    v7 = &gMoveNames[13 * v6];
    goto _080EB356;
  }
  if ( !v5 )
    goto _080EB324;
_080EB344:
  v7 = *(char **)(4 * (v3 & 0x1FF) + (v5 << 10) + 0x20051A4);
_080EB356:
  v8 = 0;
  while ( (unsigned __int8)*v7 != 255 )
  {
    ++v7;
    v8 = (v8 + 1) & 0xFFFF;
  }
  return v8;
}
