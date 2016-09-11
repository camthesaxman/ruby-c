int __fastcall sub_80FF6AC(unsigned __int8 a1)
{
  int v1; // r6@1
  int *v2; // r7@1
  signed int v3; // r0@1
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 6);
  if ( v3 == 1 )
  {
    v202F390 |= 0x80u;
    AddDecorationIconObjectFromFieldObject(33786112, *(_BYTE *)(v20388D0 + v20388F5));
    sub_80FF960(v1);
    SetUpPlacingDecorationPlayerAvatar(v1, 33786112);
    pal_fill_black();
    v202F390 &= 0x7Fu;
    *((_WORD *)v2 + 6) = 2;
  }
  else if ( v3 > 1 )
  {
    if ( v3 == 2 && (unsigned __int8)sub_807D770() == 1 )
    {
      *((_WORD *)v2 + 16) = 0;
      sub_810065C(v1);
    }
  }
  else if ( !*((_WORD *)v2 + 6) && !(v202F38F & 0x80) )
  {
    sub_80FF0E0(v1);
    SetBgTilemapBuffer(0);
    SetBgTilemapBuffer(1u);
    sub_80F9520(33786103);
    BuyMenuFreeMemory();
    *((_WORD *)v2 + 6) = 1;
  }
  return v5;
}
