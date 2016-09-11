int __fastcall sub_8070C54(unsigned __int8 a1)
{
  int v1; // r6@1
  signed int v2; // r4@1
  int *v3; // r0@10
  int (__fastcall *v4)(unsigned __int8); // r1@10
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int16)sub_803B7C8(v201C000, 0);
  if ( v2 == 65534 )
  {
    sub_8070C54(v1);
  }
  else
  {
    if ( v2 > 65534 )
    {
      if ( v2 == 0xFFFF )
      {
        GetMonNickname(v201C000, (int)&gStringVar1);
        StringCopy(&gStringVar2, &gMoveNames[13 * v2024E82]);
        StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F37C);
        sub_806E834((int)&gStringVar4, 1u);
        v201C008 = v2024E82;
        v3 = &dword_3004B20[10 * v1];
        v4 = sub_806F358;
_08070D66:
        *v3 = (int)v4;
        return v6;
      }
_08070D30:
      GetMonNickname(v201C000, (int)&gStringVar1);
      StringCopy(&gStringVar2, &gMoveNames[13 * v2]);
      StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)&gUnknown_0840F338);
      sub_806E834((int)&gStringVar4, 1u);
      v3 = &dword_3004B20[10 * v1];
      v4 = sub_806F254;
      goto _08070D66;
    }
    if ( v2 )
      goto _08070D30;
    if ( (unsigned __int16)GetEvolutionTargetSpecies(v201C000, 0, 0) )
    {
      dword_3005E94 = (int)sub_80A53F8;
      sub_8111924(v201C000);
      DestroyTask(v1);
    }
    else
    {
      sub_8070D90(v1);
    }
  }
  return v6;
}
