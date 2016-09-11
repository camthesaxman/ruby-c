signed int __fastcall CreateInvisibleSprite(int a1)
{
  int v1; // r6@1
  signed int result; // r0@1

  v1 = a1;
  LOBYTE(result) = CreateSprite((int)&gDummySpriteTemplate, 0, 0);
  if ( (unsigned __int8)result == 64 )
  {
    result = 64;
  }
  else
  {
    gSprites[68 * (unsigned __int8)result + 62] |= 4u;
    dword_2020020[17 * (unsigned __int8)result] = v1;
    result = (unsigned __int8)result;
  }
  return result;
}
