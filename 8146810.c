int __fastcall sub_8146810(char a1)
{
  char *v1; // r6@2
  char v2; // r0@3
  int v4; // [sp+Ch] [bp-4h]@0

  if ( a1 > 0 )
  {
    v1 = byte_3005D10;
    if ( (unsigned __int8)byte_3005D1C + (signed int)a1 <= 7 )
    {
      v2 = byte_3005D1C + a1;
    }
    else
    {
      byte_3005D1D += byte_3005D1C + a1 - 7;
      v2 = 7;
    }
    goto _0814686E;
  }
  v1 = byte_3005D10;
  if ( (unsigned __int8)byte_3005D1C + (signed int)a1 >= 0 )
  {
    v2 = byte_3005D1C + a1;
_0814686E:
    v1[12] = v2;
    goto _08146870;
  }
  byte_3005D1D += byte_3005D1C + a1;
  byte_3005D1C = 0;
_08146870:
  v203855E = *(_WORD *)(4 * ((unsigned __int8)v1[13] + (unsigned __int8)v1[12]) + dword_3005D24);
  DestroySprite((int)&gSprites[68 * v203932C]);
  sub_81466A0();
  sub_80A7DD4();
  return v4;
}
