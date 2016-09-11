int __fastcall sub_806CD5C(unsigned __int8 a1)
{
  int v1; // r8@1
  unsigned int v2; // r5@1
  unsigned int v3; // r4@1
  __int16 v4; // r3@8
  char *v5; // r2@9
  int *v6; // r0@9
  int (*v7)(); // r1@9
  char *v8; // r6@11
  int v9; // r5@11
  int v11; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)&gSprites[68 * v2001001 + 46] & 0xFF;
  v3 = *(_WORD *)&gSprites[68 * v2001002 + 46] & 0xFF;
  if ( v2 != v3 && v2 != 7 && v3 != 7 )
  {
    sub_806D5B8(*(_WORD *)&gSprites[68 * v2001001 + 46] & 0xFF);
    sub_806D5B8(v3);
    if ( v2 <= v3 )
    {
      v2001005 = v2;
      v2001006 = v3;
    }
    else
    {
      v2001005 = v3;
      v2001006 = v2;
    }
    v2001003 = sub_806DDA0(v2001000, v2001005);
    v2001004 = sub_806DDA0(v2001000, v2001006);
    v4 = v2001005;
    if ( v2001005 )
    {
      v5 = gSprites;
      *(_WORD *)&gSprites[68 * v2001003 + 46] = 8;
      *(_WORD *)&gSprites[68 * v2001003 + 50] = 168;
      v2001008 = 11;
      v200100A = 11;
      v6 = &dword_3004B20[10 * v1];
      v7 = sub_806D118;
    }
    else
    {
      v5 = gSprites;
      *(_WORD *)&gSprites[68 * v2001003 + 46] = -8;
      *(_WORD *)&gSprites[68 * v2001003 + 50] = -168;
      v2001008 = v4;
      v200100A = 11;
      v6 = &dword_3004B20[10 * v1];
      v7 = sub_806D014;
    }
    *v6 = (int)v7;
    v201B261 = 1;
    v8 = v5;
    v9 = (int)(v5 + 28);
    *(_DWORD *)&v5[68 * v2001003 + 28] = sub_806D37C;
    *(_WORD *)&v5[68 * v2001004 + 46] = 8;
    *(_WORD *)&v5[68 * v2001004 + 50] = 168;
    *(_DWORD *)&v5[68 * v2001004 + 28] = sub_806D37C;
    call_via_r1(&v5[68 * v2001003], *(_DWORD *)&v5[68 * v2001003 + 28]);
    call_via_r1(&v8[68 * v2001004], *(_DWORD *)(68 * v2001004 + v9));
  }
  else
  {
    sub_806CD44(a1);
  }
  return v11;
}
