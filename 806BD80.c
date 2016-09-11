int __fastcall sub_806BD80(unsigned __int8 a1)
{
  int v1; // r5@1
  signed int v2; // r4@1
  signed int v3; // r0@12
  int v4; // r0@13
  int result; // r0@19

  v1 = a1;
  v2 = 0;
  if ( word_30017A0 == 32 )
  {
    v2 = 254;
  }
  else if ( (signed int)(unsigned __int16)word_30017A0 > 32 )
  {
    if ( word_30017A0 == 64 )
    {
      v2 = 255;
    }
    else if ( word_30017A0 == 128 )
    {
      v2 = 1;
    }
  }
  else if ( word_30017A0 == 16 )
  {
    v2 = 2;
  }
  v3 = v2 << 24;
  if ( v2 << 24 )
    goto LABEL_26;
  v4 = (unsigned __int8)sub_80F92BC();
  if ( v4 == 1 )
  {
    v2 = 255;
  }
  else if ( v4 == 2 )
  {
    v2 = 1;
  }
  v3 = v2 << 24;
  if ( v2 << 24 )
  {
LABEL_26:
    sub_806BF74(v1, v3 >> 24);
    result = (unsigned __int16)word_30017A0;
  }
  else if ( word_300179E & 1 && *(_WORD *)&gSprites[68 * (sub_806CA00(v1) & 0xFF) + 46] == 7 )
  {
    result = 2;
  }
  else
  {
    result = word_300179E & 3;
  }
  return result;
}
