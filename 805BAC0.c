int __fastcall FieldObjectTurn(int a1, unsigned __int8 a2)
{
  int v2; // r6@1
  char *v3; // r4@2
  char v4; // r0@2
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = a1;
  FieldObjectSetDirection(a1, a2);
  if ( !(*(_BYTE *)(v2 + 1) & 0x10) )
  {
    v3 = &gSprites[68 * *(_BYTE *)(v2 + 4)];
    v4 = FieldObjectDirectionToImageAnimId(*(_BYTE *)(v2 + 24) & 0xF);
    StartSpriteAnim((int)v3, v4);
    SeekSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2 + 4)], 0);
  }
  return v6;
}
