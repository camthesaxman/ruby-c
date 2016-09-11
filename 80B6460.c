int __fastcall sub_80B6460(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r6@1
  int *v6; // r4@1
  int v8; // [sp+10h] [bp-4h]@0

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = &dword_3004B20[10 * (unsigned __int8)FindTaskIdByFunc((int)sub_80B64D4)];
  if ( v3 != *((_WORD *)v6 + 4) || v5 )
  {
    if ( v3 != 3 || *((_WORD *)v6 + 5) || v5 )
    {
      if ( *((_WORD *)v6 + 4) != 3 )
        sub_80B65AC((unsigned __int8)*((_WORD *)v6 + 4));
      sub_80B65D4(v6, v3, v4);
    }
  }
  else
  {
    *((_WORD *)v6 + 5) = v4;
    *((_WORD *)v6 + 6) = 1;
  }
  return v8;
}
