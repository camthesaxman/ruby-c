int sub_807CC24()
{
  char v0; // r0@5
  int v2; // [sp+10h] [bp-4h]@0

  if ( v202FEA8 == v202FEA9 )
  {
    v202FEAE = 3;
  }
  else
  {
    ++v202FEAB;
    if ( v202FEAB >= (unsigned int)v202FEAA )
    {
      v202FEAB = 0;
      if ( v202FEA8 >= v202FEA9 )
        v0 = v202FEA8 - 1;
      else
        v0 = v202FEA8 + 1;
      v202FEA8 = v0;
      sub_807CEBC(0, 32, v0);
    }
  }
  return v2;
}
