int __fastcall sub_80C2600(unsigned __int8 a1)
{
  int *v1; // r5@1
  __int16 v2; // r1@1
  int v3; // r0@1
  int v4; // r0@2
  signed int v5; // r2@2
  __int16 v6; // r0@4
  __int16 v7; // r0@7
  int v9; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  v3 = *((_WORD *)v1 + 4);
  if ( !*((_WORD *)v1 + 4) )
  {
    CreateTask((int)sub_80C2F64, 20);
    sub_80C3158("ª‚‚„È‚◊›‚€", v2018000);
    v4 = (signed __int16)sub_80C34AC("ª‚‚„È‚◊›‚€");
    v5 = 120;
_080C26A6:
    sub_80C34CC(v4, 144, v5, 1088);
    ++*((_WORD *)v1 + 4);
    return v9;
  }
  if ( v3 == 1 )
  {
    v6 = v2018004;
    if ( !v2018004 )
      goto _080C267C;
  }
  else if ( v3 == 2 )
  {
    v7 = *((_WORD *)v1 + 5) + 1;
    *((_WORD *)v1 + 5) = v7;
    if ( v7 == 21 )
    {
      v6 = 0;
_080C267C:
      *((_WORD *)v1 + 5) = v6;
      *((_WORD *)v1 + 4) = v2 + 1;
      return v9;
    }
  }
  else
  {
    if ( v3 == 3 )
    {
      sub_80C3158(&gUnknown_0842CE78, v2018000);
      v4 = (signed __int16)sub_80C34AC(&gUnknown_0842CE78);
      v5 = 0xFFFF;
      goto _080C26A6;
    }
    if ( v3 == 4 && v2018004 == 2 )
    {
      *((_WORD *)v1 + 4) = 0;
      *v1 = (int)sub_80C26E4;
    }
  }
  return v9;
}
