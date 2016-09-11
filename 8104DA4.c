int sub_8104DA4()
{
  int *v0; // r4@1
  unsigned int v1; // r5@3
  int v2; // r6@3
  _WORD *v3; // r4@4
  int v4; // r0@4
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = &dword_3004B20[10 * v200003D];
  if ( *((_WORD *)v0 + 5) != 0xFFFF )
    call_via_r0(*(&gUnknown_083ED064 + *((_WORD *)v0 + 5)));
  v1 = 4;
  v2 = (int)(v0 + 2);
  do
  {
    v3 = (_WORD *)(v2 + 2 * v1);
    v4 = *v3;
    if ( v4 != 64 )
    {
      DestroySprite((int)&gSprites[68 * v4]);
      *v3 = 64;
    }
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0xF );
  return v6;
}
