int __fastcall sub_80A0BF4(unsigned __int16 a1, char a2, unsigned __int8 a3)
{
  int v3; // r5@1
  char v4; // r7@1
  unsigned __int8 v5; // r6@1
  _BYTE *v6; // r0@7
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a1 != 175
    || (sub_80F9344() & 0xFF) != 1
    || (unsigned __int8)sub_806B528() != 1
    || v2018009 != 1 && v2018009 != 4 && v2018009 != 5 )
  {
    if ( v3 )
      itemid_copy_name(v3, &gStringVar1);
    else
      StringCopy(&gStringVar1, &gUnknown_0840E66F);
  }
  else
  {
    v6 = (_BYTE *)itemid_get_item(175);
    StringCopy(&gStringVar1, v6);
  }
  MenuPrint((int)&gUnknown_083C15B4, v4, v5);
  return v8;
}
