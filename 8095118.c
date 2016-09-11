int __fastcall sub_8095118(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r1@4
  int (*v3)(); // r2@4
  int v4; // r3@4
  int v5; // r0@5
  unsigned __int8 v6; // r0@9
  int v7; // r2@9
  unsigned __int8 v8; // r0@12
  unsigned __int8 v9; // r0@12
  int v10; // r2@12
  int *v11; // r0@16
  int (*v12)(); // r1@16
  int v14; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( !(v202F38F & 0x80) )
  {
    if ( v2038473 == 3 && (unsigned __int8)sub_8070E48(v203855E) == 10 )
    {
      v2 = v203855E;
      v3 = sub_80952E4;
      v4 = dword_3004AE4;
_080951AA:
      call_via_r3(v1, v2, v3, v4);
      return v14;
    }
    v5 = (unsigned __int16)sub_806BD80(v1);
    if ( v5 == 1 )
    {
      if ( v2038473 != 3 )
      {
        audio_play(5u);
        v8 = sub_806CA38(v1);
        GetMonNickname((int)&dword_3004360[25 * v8], (int)&gStringVar1);
        v9 = sub_806CA38(v1);
        sub_8095050(v1, v9, v10);
        SetTaskFuncWithFollowupFunc(v1, (int)sub_8095408, (int)sub_8095118);
        return v14;
      }
      v6 = sub_806CA38(v1);
      if ( !GetMonData((int)&dword_3004360[25 * v6], 45, v7) )
      {
        sub_806D5A4();
        v2 = v203855E;
        v3 = sub_80952E4;
        v4 = dword_3004AE4;
        goto _080951AA;
      }
_0809521C:
      audio_play(0x20u);
      return v14;
    }
    if ( v5 != 2 )
      return v14;
    if ( v2038473 == 1 )
      goto _0809521C;
    audio_play(5u);
    if ( v2038473 == 3 )
    {
      v202E8F4 = 0;
      v11 = &dword_3004B20[10 * v1];
      v12 = sub_80952E4;
    }
    else
    {
      v202E8F4 = 0;
      v11 = &dword_3004B20[10 * v1];
      v12 = sub_809527C;
    }
    *v11 = (int)v12;
  }
  return v14;
}
