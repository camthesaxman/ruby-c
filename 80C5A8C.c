signed int __fastcall sub_80C5A8C(unsigned __int16 a1, unsigned __int16 *a2, int a3)
{
  unsigned __int16 *v3; // r7@1
  int v4; // r6@1
  signed int result; // r0@2
  unsigned int *v6; // r5@3
  int v7; // r2@3
  int v8; // r1@4
  int v9; // r2@4
  unsigned int v10; // r5@6
  unsigned int v11; // r4@6
  unsigned __int16 v12; // [sp+0h] [bp-18h]@6

  v3 = a2;
  v4 = a1;
  if ( v202E8DC == 255 )
  {
    result = 0;
  }
  else
  {
    v6 = &dword_3004360[25 * v202E8DC];
    if ( GetMonData((int)v6, 45, a3) != 1 && GetMonData((int)v6, 11, v7) == v4 )
    {
      v12 = sub_80C58C0((int)v6, v8, v9);
      v10 = sub_80C5994(v4, v12);
      v11 = sub_80C5994(v4, *v3);
      sub_80C5A08((char *)&gStringVar2, v10);
      if ( v10 <= v11 )
      {
        result = 2;
      }
      else
      {
        *v3 = v12;
        result = 3;
      }
    }
    else
    {
      result = 1;
    }
  }
  return result;
}
