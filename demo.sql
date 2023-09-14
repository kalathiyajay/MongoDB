
db.Student.aggregate([
    {
        $lookup:{
            from:"Teacher",
            localField:"Teacher",
            foreignField:"First_Name",
            as:"Data"
        }
},
{$project:{_id:0,First_Name:1}},
{$limit:3}])