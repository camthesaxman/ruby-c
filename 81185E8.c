int sub_81185E8()
{
  int v0; // r5@1
  char v1; // r6@1
  unsigned int v2; // r1@2
  unsigned __int8 v3; // r3@2
  int v5; // [sp+1Ch] [bp-4h]@0

  v0 = v201903C;
  v1 = 0;
  do
  {
    gSprites[68 * v0 + 62] |= 4u;
    dword_2020020[17 * v0] = (int)SpriteCallbackDummy;
    StartSpriteAnim((int)&gSprites[68 * v0], 0);
    v2 = 0;
    v3 = v1 + 1;
    do
    {
      *(&word_2020032[34 * v0] + v2) = 0;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 7 );
    v0 = (unsigned __int8)(v0 + 1);
    ++v1;
  }
  while ( v3 <= 5u );
  return v5;
}
