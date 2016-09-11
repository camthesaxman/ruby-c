int __fastcall sub_8064990(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned int v2; // r2@1
  char *v3; // r4@2
  char v4; // r0@5
  int v6; // [sp+Ch] [bp-4h]@0

  v2 = 0;
  while ( 1 )
  {
    v3 = &gSprites[68 * v2];
    if ( v3[62] & 1 )
    {
      if ( *((int (__fastcall **)(int))v3 + 7) == sub_8064970 && (*((_WORD *)v3 + 23) & 0xFF) == a1 )
        break;
    }
    v2 = (v2 + 1) & 0xFF;
    if ( v2 > 0x3F )
      return v6;
  }
  v4 = FieldObjectDirectionToImageAnimId(a2);
  StartSpriteAnim((int)v3, v4);
  return v6;
}
