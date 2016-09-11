int sub_80C7A80()
{
  signed int v0; // r0@1
  char v1; // r0@5
  unsigned int v2; // r1@7
  int v4; // [sp+0h] [bp-4h]@0

  v0 = GetCurrentMapRotatingGatePuzzleType();
  if ( v0 == 1 )
  {
    v2038800 = &gUnknown_083D2964;
    v1 = 7;
    goto _080C7AB6;
  }
  if ( v0 > 1 && v0 == 2 )
  {
    v2038800 = &gUnknown_083D299C;
    v1 = 14;
_080C7AB6:
    v2038804 = v1;
    v2 = 0;
    do
      *(_BYTE *)(v2++ + 33785840) = 64;
    while ( v2 <= 0xD );
  }
  return v4;
}
