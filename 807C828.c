int sub_807C828()
{
  unsigned __int8 v0; // r0@2
  unsigned __int8 v1; // r5@2
  int v2; // r0@2
  int v4; // [sp+Ch] [bp-4h]@0

  if ( !(unsigned __int8)FuncIsActiveTask((int)sub_807CA34) )
  {
    v0 = AllocSpritePalette(4608);
    v1 = v0;
    v2 = CpuSet(&gUnknown_083970E8, 32 * v0 + 33746120, 67108872);
    sub_807CB10(v2);
    v202FEBD = v1;
    v202FEBC = AllocSpritePalette(4609);
    v202FEC2 = 0;
    v202FEC0 = 0;
    v202FEC6 = 0;
    v202FECC = 0;
    v202FEE8 = 0;
    v202FEE3 = 0;
    v202FF0C = 0;
    v202FEFE = 0;
    v202FEFF = 0;
    v202FF16 = 0;
    v202FEE2 = 0;
    sub_807DB64(16, 0);
    v202FEB8 = 0;
    v202FEAE = 3;
    v202FEB0 = 0;
    v202FEBB = 1;
    v202FEB1 = CreateTask((int)sub_807C9E4, 80);
  }
  return v4;
}
