int sub_8137138()
{
  unsigned int v0; // r4@1
  int v1; // r1@3
  int v3; // [sp+14h] [bp-4h]@0

  LoadSpriteSheet((int)&gSpriteSheet_ConditionUpDown);
  LoadSpritePalette((int)&gSpritePalette_ConditionUpDown);
  *(_BYTE *)(v2039304 + 84) = 0;
  v0 = 0;
  do
  {
    if ( *(_BYTE *)(v2039304 + 97 + v0) )
    {
      v1 = (unsigned __int8)CreateSprite(
                              (int)&gSpriteTemplate_840618C,
                              gUnknown_08406158[2 * v0],
                              gUnknown_08406158[2 * v0 + 1]);
      if ( v1 != 64 )
      {
        if ( *(_BYTE *)(v2039304 + 97 + v0) )
          dword_2020020[17 * v1] = (int)sub_81371DC;
        ++*(_BYTE *)(v2039304 + 84);
      }
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 4 );
  return v3;
}
