int __fastcall sub_8095584(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r5@1
  int v3; // r2@1
  char *v4; // r0@5
  int *v5; // r0@5
  int (__fastcall *v6)(unsigned __int8); // r1@5
  unsigned int i; // r4@8
  int v8; // r4@21
  unsigned __int8 v9; // r0@21
  unsigned __int8 v10; // r0@22
  int v11; // r4@22
  int v13; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  sub_806E7D0(dword_3004B20[10 * a1 + 4], (int)&gUnknown_083B5FF4);
  v2 = (unsigned __int8)sub_806CA38(v1);
  if ( (unsigned __int8)sub_806B528() != 1 || v2 != 1 && v2 != 4 && v2 != 5 )
  {
    if ( GetMonData((int)&dword_3004360[25 * v2], 57, v3) )
    {
      for ( i = 0; i < v2024A68; i = (i + 1) & 0xFF )
      {
        if ( !(battle_side_get_owner(i) << 24) && (unsigned __int8)sub_8094C20(v2) == *(_WORD *)(2 * i + 0x2024A6A) )
        {
          sub_806D5A4();
          GetMonNickname((int)&dword_3004360[25 * v2], (int)&gStringVar1);
          StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EFE8);
          sub_806E834((int)&gStringVar4, 0);
          v5 = &dword_3004B20[10 * v1];
          v6 = sub_80954C0;
          goto _0809589A;
        }
      }
      if ( GetMonData((int)&dword_3004360[25 * v2], 45, 100) )
      {
        sub_806D5A4();
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F079);
        sub_806E834((int)&gStringVar4, 0);
        v5 = &dword_3004B20[10 * v1];
        v6 = sub_80954C0;
      }
      else if ( (unsigned __int8)sub_8094C20(v2) == v201609D )
      {
        sub_806D5A4();
        GetMonNickname((int)&dword_3004360[25 * v2], (int)&gStringVar1);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F003);
        sub_806E834((int)&gStringVar4, 0);
        v5 = &dword_3004B20[10 * v1];
        v6 = sub_80954C0;
      }
      else if ( v2038473 == 4 )
      {
        sub_806D5A4();
        sub_8040B8C();
        sub_806E834((int)&gStringVar4, 0);
        v5 = &dword_3004B20[10 * v1];
        v6 = sub_80954C0;
      }
      else if ( v2038473 == 2 )
      {
        v8 = v2024E6C;
        sub_806D5A4();
        v9 = pokemon_order_func(*(_BYTE *)(2 * v8 + 0x2024A6A));
        GetMonNickname((int)&dword_3004360[25 * v9], (int)&gStringVar1);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840EFCC);
        sub_806E834((int)&gStringVar4, 0);
        v5 = &dword_3004B20[10 * v1];
        v6 = sub_80954C0;
      }
      else
      {
        v202E8F5 = sub_8094C20(v2);
        v202E8F4 = 1;
        v10 = pokemon_order_func(*(_BYTE *)(2 * v2024E6C + 0x2024A6A));
        v11 = v10;
        sub_8094C98(v10, v2);
        sub_806E6F0((int)&dword_3004360[25 * v11], (int)&dword_3004360[25 * v2]);
        v5 = &dword_3004B20[10 * v1];
        v6 = sub_809527C;
      }
    }
    else
    {
      sub_806D5A4();
      GetMonNickname((int)&dword_3004360[25 * v2], (int)&gStringVar1);
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F023);
      sub_806E834((int)&gStringVar4, 0);
      v5 = &dword_3004B20[10 * v1];
      v6 = sub_80954C0;
    }
  }
  else
  {
    sub_806D5A4();
    v4 = sub_8040D08();
    StringCopy(&gStringVar1, v4);
    StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F046);
    sub_806E834((int)&gStringVar4, 0);
    v5 = &dword_3004B20[10 * v1];
    v6 = sub_80954C0;
  }
_0809589A:
  *v5 = (int)v6;
  return v13;
}
