int __fastcall sub_806BE38(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r4@1
  int *v3; // r6@1
  int v4; // r0@13
  __int16 v5; // r2@19
  int result; // r0@20

  v1 = a1;
  v2 = 0;
  v3 = gMain;
  if ( word_30017A0 == 32 )
  {
    LOBYTE(v2) = -2;
  }
  else
  {
    if ( (signed int)(unsigned __int16)word_30017A0 > 32 )
    {
      if ( word_30017A0 == 64 )
      {
        LOBYTE(v2) = -1;
        goto _0806BE8E;
      }
      if ( word_30017A0 == 128 )
      {
        LOBYTE(v2) = 1;
        goto _0806BE8E;
      }
    }
    else if ( word_30017A0 == 16 )
    {
      v2 = 2;
    }
    if ( !v2 )
    {
      v4 = (unsigned __int8)sub_80F92BC();
      if ( v4 == 1 )
      {
        LOBYTE(v2) = -1;
      }
      else if ( v4 == 2 )
      {
        LOBYTE(v2) = 1;
      }
      v3 = gMain;
    }
  }
_0806BE8E:
  v5 = *((_WORD *)v3 + 23);
  if ( v5 & 8 )
  {
    sub_806C890(v1);
    result = 8;
  }
  else if ( (_BYTE)v2 )
  {
    sub_806C658(v1);
    result = *((_WORD *)v3 + 24);
  }
  else if ( v5 & 1 && *(_WORD *)&gSprites[68 * (unsigned __int8)sub_806CA00(v1) + 46] == 7 )
  {
    result = 2;
  }
  else
  {
    result = word_300179E & 3;
  }
  return result;
}
