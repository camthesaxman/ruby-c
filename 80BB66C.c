signed int sub_80BB66C()
{
  int v0; // r1@1
  signed int result; // r0@2
  signed __int16 v2; // [sp+0h] [bp-Ch]@1

  GetXYCoordsOneStepInFrontOfPlayer(&v2, &v2 + 1);
  v0 = MapGridGetMetatileBehaviorAt(v2, *(&v2 + 1)) & 0xFFF;
  if ( ((v0 - 144) & 0xFFFFu) > 1 )
  {
    if ( ((v0 - 146) & 0xFFFFu) > 1 )
    {
      if ( ((v0 - 154) & 0xFFFFu) > 1 )
      {
        if ( ((v0 - 148) & 0xFFFFu) > 1 )
        {
          if ( ((v0 - 150) & 0xFFFFu) > 1 && v0 != 156 && v0 != 157 )
          {
            if ( ((v0 - 152) & 0xFFFFu) <= 1 )
              result = 6;
            else
              result = 0;
          }
          else
          {
            result = 5;
          }
        }
        else
        {
          result = 4;
        }
      }
      else
      {
        result = 3;
      }
    }
    else
    {
      result = 2;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}
