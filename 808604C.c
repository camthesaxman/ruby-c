int __fastcall sub_808604C(__int16 a1, __int16 a2, __int16 a3, __int16 a4)
{
  __int16 v4; // r8@1
  __int16 v5; // r4@1
  __int16 v6; // r5@1
  __int16 v7; // r6@1
  int result; // r0@1
  char *v9; // r1@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  result = (unsigned __int8)CreateInvisibleSprite((int)sub_80860A0);
  v9 = &gSprites[68 * result];
  *((_WORD *)v9 + 18) = v5;
  *((_WORD *)v9 + 19) = v6;
  *((_WORD *)v9 + 28) = v7;
  *((_WORD *)v9 + 29) = v4;
  *((_WORD *)v9 + 30) = result;
  return result;
}
