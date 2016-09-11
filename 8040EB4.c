int __fastcall object_new_hidden_with_callback(int a1)
{
  int v1; // r6@1
  int result; // r0@1

  v1 = a1;
  result = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_82087AC, 248, 168);
  gSprites[68 * result + 62] |= 4u;
  dword_2020020[17 * result] = v1;
  return result;
}
