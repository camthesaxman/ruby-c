int __fastcall sub_80A6214(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r6@1
  int v3; // r0@2
  char *v4; // r1@2
  int (__fastcall *v5)(unsigned __int8); // r2@2
  int v6; // r0@2
  _BYTE *v7; // r0@4
  int *v8; // r0@8
  int v10; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = (v2038559 + 1) & 0xFF;
  if ( !(sub_80F931C(v203855E) << 24) )
  {
    v3 = sub_80A73FC(0);
    sub_80A7590(v3);
    v4 = (char *)&gUnknown_0840E781;
    v5 = sub_80A6024;
    v6 = v1;
_080A6280:
    DisplayCannotUseItemMessage(v6, v4, v5, 1);
    return v10;
  }
  if ( !(sub_80F92F4(v203855E) << 24) )
  {
    sub_80A73FC(0);
    itemid_copy_name(v203855E, &gStringVar1);
    v7 = StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840E7DD);
    sub_80A7590(v7);
    v5 = sub_80A6024;
    v6 = v1;
    v4 = &gStringVar4;
    goto _080A6280;
  }
  if ( v2 == 5 || itemid_is_unique(v203855E) << 24 )
  {
    DisplayCannotDismountBikeMessage(v1);
  }
  else
  {
    v8 = &dword_3004B20[10 * v1];
    *((_WORD *)v8 + 12) = (unsigned int)sub_808A3F8 >> 16;
    *((_WORD *)v8 + 13) = (unsigned int)sub_808A3F8;
    sub_80A5AAC(v1);
  }
  return v10;
}
