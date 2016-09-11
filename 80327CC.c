int sub_80327CC()
{
  int v0; // r5@1
  __int16 v1; // r4@1
  int v2; // r0@1
  char *v3; // r0@1
  int v4; // r5@2
  __int16 v5; // r4@2
  int v6; // r0@2
  int v8; // [sp+14h] [bp-4h]@0

  LoadCompressedObjectPic((_DWORD *)"(§æ\b€");
  v0 = (unsigned __int8)battle_get_side_with_given_state(1);
  v1 = (unsigned __int8)sub_8077ABC(v0, 0);
  v2 = sub_8077ABC(v0, 1);
  *(_BYTE *)(12 * v0 + 0x2017817) = CreateSprite(
                                      (int)&gSpriteTemplate_81FAF34,
                                      v1,
                                      (((v2 << 16) & 0xFFFFFFu) + 0x200000) >> 16);
  v3 = &gSprites[68 * *(_BYTE *)(12 * v0 + 0x2017817)];
  *((_WORD *)v3 + 23) = v0;
  if ( battle_type_is_double(v3) << 24 )
  {
    v4 = (unsigned __int8)battle_get_side_with_given_state(3);
    v5 = (unsigned __int8)sub_8077ABC(v4, 0);
    v6 = sub_8077ABC(v4, 1);
    *(_BYTE *)(12 * v4 + 0x2017817) = CreateSprite(
                                        (int)&gSpriteTemplate_81FAF34,
                                        v5,
                                        (((v6 << 16) & 0xFFFFFFu) + 0x200000) >> 16);
    *(_WORD *)&gSprites[68 * *(_BYTE *)(12 * v4 + 0x2017817) + 46] = v4;
  }
  return v8;
}
